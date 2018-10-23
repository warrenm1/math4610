# Matrix Subtaction 
This routine calculates and returns the difference between two nXn matrices

**Routine Name:**           mat_sub

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc matrix_subtraction.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o mat_sub matrix_subtraction.cpp

**Description/Purpose:** This routine takes two nXn matrices, calculates the difference between them, and returns the result

**Input:** This routine takes two nXn matrices of the same numerical data type

**Output:** This routine returns an nXn matrix of the same numerical data type as those matrices passed in

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for mat_sub

    #include<vector>
    
    template(typename T)
    std::vector mat_sub(std::vector<T> A[][], std::vector<T> B[][]){
        std::vector<T> C[][];
    
        for(int i = 0; i < A[1].size(); i++)
            for(int j = 0; j < B.size(); j++)
                C[i][j] = A[i][j] - B[i][j];
    
        return C;
    }//mat_sub


**Last Modified:** October/2018
