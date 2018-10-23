# Matrix Addition 
This routine returns the sum of two matrices

**Routine Name:**           mat_add

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc matrix_addition.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o mat_add matrix_addition.cpp

**Description/Purpose:** This routine takes two matrices and adds them together, element by element, and returns the result.

**Input:** This routine takes two nXn matrices of the same size of the same numerical data type

**Output:** This routine returns a single nXn matrix of the same numerical data type as those passed in

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for mat_add

    #include<vector>
    
    template(typename T)
    std::vector mat_add(std::vector<T> A[][], std::vector<T> B[][]){
        std::vector<T> C[][];
    
        for(int i = 0; i < A[1].size(); i++)
            for(int j = 0; j < B.size(); j++)
                C[i][j] = A[i][j] + B[i][j];
    
        return C;
    }//mat_add


**Last Modified:** October/2018
