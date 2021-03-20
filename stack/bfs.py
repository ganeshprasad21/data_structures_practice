adjList = {
    "a":["b","d"],
    "b":["c","a"],
    "c":[],
    "d":["e","a","f"],
    "e":["d","g","f"],
    "f":["h","d","e"],
    "h":["f","g"],
    "g":["e","h"],
    }
queueForBfs = []
parentVertices = {}
valueOfEachNode = {}
stateOfVertices = {}

for aVertices in adjList:
    valueOfEachNode[aVertices] = -1
    stateOfVertices[aVertices] = False

queueForBfs.append("a")
levelValue = 0
targetVertices = "g"
parentVertices["a"] = False
stateOfVertices["a"] = True
valueOfEachNode["a"] = levelValue
bfsTravelOutput = []
while(len(queueForBfs) != 0 ):
    currentVerti = queueForBfs.pop(0)
    bfsTravelOutput.append(currentVerti)
    for anAdjVerti in adjList[currentVerti]:
        if (stateOfVertices[anAdjVerti] == False):
            queueForBfs.append(anAdjVerti)
            parentVertices[anAdjVerti] = currentVerti
            valueOfEachNode[anAdjVerti] = valueOfEachNode[currentVerti]+1
            stateOfVertices[anAdjVerti] = True
    if (stateOfVertices[targetVertices] == True):
        break
        print("hello")
    
print(valueOfEachNode[targetVertices])
print(bfsTravelOutput)