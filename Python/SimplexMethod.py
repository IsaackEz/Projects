import numpy as np  #Library for support for large, multi-dimensional arrays and matrices

#Table for MAX
Table = np.array((  (0.0, 2, -1, 1, 0, 4),
                    (0, 4, 3, 0, 1, 18),
                    (0, -800, -200, 0, 0, 0)))

# #Table for MIN
# Table = np.array(((2, 1, 8), #Constraints
#                   (6, 1, 12),   #Constraints
#                   (1, 3, 9),    #Constraints
#                   (1, 0, 0), #Slack variables
#                   (0, 1, 0), #Slack variables
#                   (600, 400, 0.0))) #Z

decision = input("Max or Min: ") #Deciding if is maximization or minimization
variables = input("No. variables: ")  #How many variables

def maximization(var):
    for i in range(var):    #Loop to print the variables
        if (sum(Table[:,i+1])==1):  #Check if the column is == 1 (Finding X and check if is the real variable)
            rowX = np.where(Table[:,i+1]==1)   #Get the row of the variable X
            x = Table[int(rowX[0])][-1]    #Save the solution for X[i]
        else:
            x = 0   #If there is no solution assign 0
        print("X"+str(i+1)+": "+str(x)) #Print the variables X[i]
    print("Z:", Table[-1][-1])    #Print function Z

def minimization(var):
    for i in range(var):    #Loop to print the variables
        x = TableT[-1][-2-i]    #Get the row of the variable X
        print("X"+str(i+1)+": "+str(x)) #Print the variables X[i]
    print("Z:", TableT[-1][-1])    #Print function Z

def min():
    flag = 1 #Flag to know if we finished (There is no negatives on last row (Z))
    while(flag != 0):   #Loop to remove the negatives on Z
        radQuots = []  #Array for the radius quotient
        minFunZ = np.amin(TableT[-1][:])   #Find the min of the last row (Z)
        pivotC = np.where(TableT[-1][:] == minFunZ) #Find the column of the minFunZ
        if minFunZ < 0:  #If the min of function Z is < 0
            positivesRows = np.where((TableT[:,pivotC[0][0]] > 0))  #Getting the positives values for the pivot column
            for i in range(len(positivesRows[0])):     #Getting the min radius quotient 
                radQuot = (TableT[positivesRows[0][i]][-1])/(TableT[positivesRows[0][i]][pivotC[0][0]]) #Dividing the radius quotient
                radQuots.append(radQuot)  #Puttin them on a list
                pivotQuot = np.amin(radQuots)  #Getting the min of the radQuots
                samePivotQuot = [j for j, samePivotQuot in enumerate(radQuots) if samePivotQuot == pivotQuot] #Saving all the min radius quotient
                pivotR = positivesRows[0][int(samePivotQuot[0])]  #If there is more than 1 min radius quotient select the first one
            TableT[pivotR][:] = (TableT[pivotR][:])/(TableT[pivotR][pivotC[0][0]]) #Recalculate the pivotR, that it will be our objective row
            for i in range(len(TableT)):   #Recalculating the rows remaning
                if (i != pivotR):  #Modifying all but the objective row
                    TableT[i][:] = TableT[i][:] - (TableT[i][pivotC[0][0]]*TableT[pivotR][:])   #Formula to calculate the new rows
        else:
            flag = 0    #There is no negative numbers in the last row (funZ)
    #print(TableT) #Printing the entire table

def max():
    flag = 1 #Flag to know if we finished (There is no negatives on last row (Z))
    while(flag != 0):   #Loop to remove the negatives on Z
        radQuots = []  #Array for the radius quotient
        minFunZ = np.amin(Table[-1][:])   #Find the min of the last row (Z)
        pivotC = np.where(Table[-1][:] == minFunZ) #Find the column of the minFunZ
        if minFunZ < 0:  #If the min of function Z is < 0
            positivesRows = np.where((Table[:,pivotC[0][0]] > 0))  #Getting the positives values for the column pivot
            for i in range(len(positivesRows[0])):     #Getting the min radius quotient 
                radQuot = (Table[positivesRows[0][i]][-1])/(Table[positivesRows[0][i]][pivotC[0][0]]) #Dividing the radius quotient
                radQuots.append(radQuot)  #Puttin them on a list
                pivotQuot = np.amin(radQuots)  #Getting the min of the radQuots
                samePivotQuot = [j for j, samePivotQuot in enumerate(radQuots) if samePivotQuot == pivotQuot] #Saving all the min radius quotient
                pivotR = positivesRows[0][int(samePivotQuot[0])]  #If there is more than 1 min radius quotient select the first one
            Table[pivotR][:] = (Table[pivotR][:])/(Table[pivotR][pivotC[0][0]]) #Recalculate the pivotR
            for i in range(len(Table)):   #Recalculating the rows remaning
                if (i != pivotR):  #Modifying all but the objective row
                    Table[i][:] = Table[i][:] - (Table[i][pivotC[0][0]]*Table[pivotR][:])   #Formula to calculate the new rows
        else:
            flag = 0    #There is no negative numbers in the last row (funZ)

if(decision == "Max" or decision == "max"): #If is maximization
    max()   #Calling the max function
    maximization(int(variables))    #Calling the maximization function passing the number of variables
elif(decision == "Min" or decision == "min"):  #If is minimization
    TableT = np.transpose(Table)    #Transposing the original Table to do the dual method
    TableT[-1][:] *= -1 #Multiplying by -1 the last row (Z) (To make the equality)
    min()   #Calling the min function
    minimization(int(variables))    #Calling the maximization function passing the number of variables