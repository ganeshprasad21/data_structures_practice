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

#3 states white unvisited grey visited black all vert visited
staringPoint = "a"
state = {}
for vert in adjList:
    state[vert] = "white"
state[staringPoint] = "grey"

def dfsUsingStack(adjList,start,targe,state):#returns true if path exists
    stakForDfs = []
    stakForDfs.append(start)
    while(len(stakForDfs) != 0):
        currentVerti = stakForDfs.pop()
        state[currentVerti] = "black"
        if currentVerti == targe:
            return True
        for adjacentVert in adjList[currentVerti]:
            if state[adjacentVert] != "black":
                stakForDfs.append(adjacentVert)
                state[adjacentVert] = "grey"
                if adjacentVert == targe:
                    print("found")
                    print(state)
                    print(stakForDfs)
                    return True
    return False
print(dfsUsingStack(adjList,"a","d",state))

def helpDfsRecursive(adjList,start,targe,state):
        for adjVert in adjList[start]:
            state[adjVert] = True
        if state[targe] == True:
                return True
        answer = helpDfsRecursive(adjList,adjVert,targe,state)
        if answer:
            return answer
        return False

def dfsUsingRecursion(adjList,start,targe,state):
    print("using recursion finding if e is present")
    for Vert in adjList:
        state[Vert] = False
    return helpDfsRecursive(adjList,start,targe,state)

print(dfsUsingRecursion(adjList,"a","h",state))
print("thanks")
        

