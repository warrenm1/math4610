# GE solution 
This routine performs a GE on a large nXn matrix.

**Routine Name:**           gauss_elim_nxn

**Author:** Michael A. Warren

**Language:** Python. This code can be used using a Python compiler

For example,

    python GaussElim_solve.py

**Description/Purpose:** This performs the GE on a matrix and solved the system of linear equations using back substitution.

**Input:** This routine takes an nXn matrix (A) and an array of the same length (b).

**Output:** This routine spits out the solution for the given matrix and arrray in the form of an array.

**Usage/Example:**

	import random
	
	def matrixGen_nXn(n):
	    A = [[0.0] * n for _ in range(n)]
	
	    for i in range(n):
	        for j in range(n):
	            A[i][j] = random.uniform(1,100)

	    return A

	def vectorGen(n):
	    v = [0.0 for _ in range(n)]

	    for i in range(n):
	        v[i] = random.uniform(1,100)

	    return v

	A = matrixGenerator.matrixGen_nXn(100)
	b = matrixGenerator.vectorGen(100)

	print(gauss_elim_nxn(A,b))

Can be infinitely many different combinations. One such a time displays:

	[4.507077807840667, -1.7030564499088348, 1.0712686510266112, 2.582291379545783, -0.5414175478182692, -2.6108316320328253, 2.2548860117096834, 0.8435781323627335, 0.41350352593832784, -4.76493747478204, -1.6078271272269022, 1.3063076073145368, 2.3845101759748344, 3.827295688354958, -3.515773676045995, 0.18798344246557164, -2.042742584533861, 2.0343173105641688, 1.1677486319450217, -1.6217899886529226, 3.070551393411942, 0.6747351337610936, 1.0642352149874414, 0.34181820346080594, 1.8763351769317091, -0.8775347336585829, -1.3913411749299067, -2.0892641955908844, 1.881871079642025, 1.3467189076646175, 3.856177419209388, 1.9260369055608328, 0.6105011470304782, -2.682054019484071, -2.096741543537549, 0.3024693552401257, -0.33937630069393093, 1.4175659066321646, -2.65829593801121, -1.604043699069901, 0.955708558959812, -0.9796902575248924, -0.850073891885983, -2.342396295602551, -3.475135622012692, -0.2956860779697283, 2.6436431543332026, -0.3307495110683756, 0.6781365819350494, 2.981283969827474, -6.263673252252068, -0.1330388639123639, 1.743267133779707, -2.1132580353211328, -0.19686001136092482, -2.363410175659439, 2.0489354526000283, 1.4932839735327201, 2.343248935699103, -2.1382303511076555, 3.269971809368504, 3.5123091187413453, -2.33406623694694, 0.23940458556204086, 0.24565172091351342, 3.6520698027151437, 0.6735872240912723, 6.255637772786016, -0.10744390400418685, -0.7538934168900604, -0.33555678859443444, 0.3531225941856624, 2.3367798603899534, -0.9192663069048245, -0.26510071857500467, 3.5034605244038235, -1.8794251042117898, 0.12432236712365335, -5.4021646902797595, -3.317246381789533, -1.5478812899285235, -2.913008587925372, 3.4077659500004236, 0.12386049031213568, 2.308800442517056, 2.1788554152459763, -2.804089152661512, 1.1138547644875136, 1.3023017902096212, -3.5325109283446365, -0.39638419140029996, -1.2279654033425356, -0.21775166506701432, 2.2037446704540513, 0.051935140695968746, -0.3853869505917162, -6.036796222463427, 4.323908809770165, -3.9187077161862818, -2.4322593816292333]

While another time displays:

	Not a Unique Solution

**Implementation/Code:** The following is the code for gauss_elim_nxn

	import sys
	import BackSubstitution

	def gauss_elim_nxn(A, b):
	    n = len(b)
	
	    for k in range(n-1):
	        maxi = k
	        max = 0
	        for q in range(k,n):
	            if A[q][k] > max:
	                max, maxi = A[q][k],q
	        if max == 0:
	            print("Not a Unique Solution")
	            sys.exit()
	        if maxi != k:
	            for r in range(k,n):
	                A[maxi][r],A[k][r] = A[k][r], A[maxi][r]
	            b[maxi],b[k] = b[k],b[maxi]
	
	        for i in range(k+1,n):
	            factor = A[i][k] / A[k][k]
	            for j in range(k,n):
	                A[i][j] = A[i][j] - factor * A[k][j]
	            b[i] = b[i] - factor * b[k]
	
	        x = BackSubstitution.back_sub(A,b)
	
	    return x

**Last Modified:** November/2018
