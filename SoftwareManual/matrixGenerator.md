# Matrix Generator 
These routines create a random, square, uniformly distributed, symmetric, and diagonally dominant matrix, and a RHS solution that works.

**Routine Name:**           matrixGen, vectorGen

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler.

For example,

    python matrixGenerator.py

**Description/Purpose:** These routines create a random, square, uniformly distributed, symmetric, and diagonally dominant matrix, and a RHS solution that works with it by multiplying the matrix by a vector of 1s.

**Input:** 'matrixGen' takes a single int value, representing the size of the matrix. 
'vectorGen' takes a square matrix.

**Output:** 'matrixGen' returnsa random, square, uniformly distributed, symmetric, and diagonally dominant matrix. 
'vectorGen' returns a vector the same size as the inputted matrix.

**Usage/Example:**

	A = matrixGen(10)
	b = vectorGen(A)

	for i in range(len(A)):
	    print(A[i])

	print()
	print(b)

Displays:

	[1687.5752780735045, 59.086383041814244, 138.67808896029533, 113.22195255881337, 52.13941055108879, 142.11579614581657, 81.2139207425945, 42.088134198315686, 42.171773076020685, 110.76722046478052]
	[59.086383041814244, 5305.900213619251, 129.35466012578019, 204.04176347437803, 299.683929819177, 401.4440655836414, 381.8289991586633, 188.2490208886731, 74.93420430506579, 273.4449305271365]
	[138.67808896029533, 129.35466012578019, 2349.538875975343, 91.65845160711872, 119.23514656738129, 149.45683544370976, 103.31209135108223, 160.37242439145473, 176.9959900759988, 210.03458080545948]
	[113.22195255881337, 204.04176347437803, 91.65845160711872, 9208.70347024406, 789.2099620956252, 912.563839203795, 308.46035423414787, 585.878339006792, 217.56376911851626, 283.12105195811984]
	[52.13941055108879, 299.683929819177, 119.23514656738129, 789.2099620956252, 1171.7420768661664, 196.83566420715744, 143.86923870799984, 113.6222786522334, 81.7581755577661, 128.19851920001673]
	[142.11579614581657, 401.4440655836414, 149.45683544370976, 912.563839203795, 196.83566420715744, 3506.723872391967, 215.8842677800343, 322.6965328480067, 325.64700868152363, 313.9695578591155]
	[81.2139207425945, 381.8289991586633, 103.31209135108223, 308.46035423414787, 143.86923870799984, 215.8842677800343, 8891.129412909911, 225.54954982112068, 827.7695192517766, 745.6397506962775]
	[42.088134198315686, 188.2490208886731, 160.37242439145473, 585.878339006792, 113.6222786522334, 322.6965328480067, 225.54954982112068, 698.7359877638341, 116.94943786814014, 101.70550064169358]
	[42.171773076020685, 74.93420430506579, 176.9959900759988, 217.56376911851626, 81.7581755577661, 325.64700868152363, 827.7695192517766, 116.94943786814014, 4600.060083805939, 375.3757444765698]
	[110.76722046478052, 273.4449305271365, 210.03458080545948, 283.12105195811984, 128.19851920001673, 313.9695578591155, 745.6397506962775, 101.70550064169358, 375.3757444765698, 9455.677540335384]
	
	[2469.0579578130446, 7317.9681705435805, 3628.6371453036236, 12714.422953501366, 3096.2944022246124, 6487.337440144766, 11924.657104653608, 2555.847206080264, 6839.225706217317, 11997.934396964552]

**Implementation/Code:** The following is the code for 'matrixGen' && 'vectorGen'

To get the best results, generate a matrix first, then use that as the input of the vector generator. The other functions written below are simply used to calculate the matrix and vector.

	import random
	
	def matrixGen(n):
	    U = [[0.0]*n for _ in range(n)]
	
	    for row in range(n):
	        diag = 0
	        for col in range(row,n):
	            if row == col:
	                U[row][col] = random.uniform(1,100)
	                diag = U[row][col]
	            else:
	                U[row][col] = random.uniform(1,diag/n)
	
	    A = m_mult(m_trans(U),U)
	    return A
	
	def vectorGen(A):
	    x = [1.0 for _ in range(len(A))]
	
	    b = m_v_mult(A,x)
	
	    return b
	
	def m_v_mult(A,x):
	    b = []
	    for i in range(len(x)):
	        b.append(0)
	
	    for i in range(len(A)):
		        for j in range(len(x)):
       	     b[j] = b[j] + (A[i][j] * x[j])
	
	    return b
	
	def m_trans(A):
	    At = []
	
	    for i in range(len(A)):
	        temp = []
	        for j in range(len(A[i])):
	            temp.append(A[j][i])
	
	        At.append(temp)
	
	    return At
	
	def m_mult(A,B):
	    C = []
	
	    for row in range(len(A)):
	        temp = []
	        for col in range(len(B[row])):
	            temp.append(v_dot(A[row],[i[col] for i in B]))
	
	        C.append(temp)
	
	    return C
	
	def v_dot(v,u):
	    prod = 0
	
	    for i in range(len(v)):
	        prod += v[i]*u[i]
	
	    return prod

**Last Modified:** November/2018
