# Matrix Transpose 
This routine computes and returns the transpose of an nXn matrix

**Routine Name:**           mat_trans

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc matrix_transpose.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o mat_trnas matrix_transpose.cpp

**Description/Purpose:** This routine takes a matrix, transforms it into the transpose, and returns the transpose

**Input:** This routine requires an nXn matrix by reference of a numerical data type

**Output:** This routine returns an nXn matrix of a numerical data type that has been made its transpose

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for mat_trans()

    #include<vector>
    
    template(typename T)
    std::vector mat_trans(std::vector<T>& A[][]){
        std::vector<T> At[][];
    
        for(int i = 0; i < A[i].size(); i++)
            for(int j = 0; j < A.size(); j++)
                At[i][j] = A[j][i];
    
        return At;
    }//mat_trans


**Last Modified:** October/2018
