import pandas as pd
df = pd.read_csv('Book1.csv.')
# print(df)
Data = df.to_numpy()
# print(Data)
# print(len(Data))
Test = Data
print(Data)
# for i in range(sizeof(Data))


Test = Data
i=0
j=0
for i in range(len(Test)):
    for j in range(len(Test[i])):
        if(j==0):
            continue
        elif(Test[i][j]==1):
            j_ = j
            if(j_ +(len(Test[i])-1)):
                while(Test[i][j_ +1]==1):
                    Test[i][j]=Test[i][j]+1
                j_ = j_ +1
# print(Test)
# print (Test.transpose())

# print(Test)
Test = Test.transpose()
print(Test)



# print(Test)
path = []
temppath = []
pathcoeff=0
first=1
pos=0
k=0
def addpath(H,S):
    for p in range(H):
        path.append(S+1)
NewData = list(Test)
rows = len(NewData[i])
cols = len(NewData)
for i in range(cols):
    for j in range(rows):
        if(i==0):
            continue
        elif(i==1):
            max = NewData[i].max()
            position=NewData[i].argmax()
            # (position).arg()
            i=i+max
            addpath(max,position)
            # print(max,position)
        else:
            first=2
            for k in range(len(NewData[1])):
                if(NewData[i][k]==0):
                    continue
                elif (first==3):
                    max=NewData[j][k]
                    posi=k
                    first=0
                elif((abs(position.posi)/max)>(abs(position.pos)/k)):
                    max=NewData[j][k]
                    posi=k
            if(i+max>len(NewData[i])):
                break
            i=i+max
            position.posi
            addpath(max,position)
            # print(max,position)
print(path)
