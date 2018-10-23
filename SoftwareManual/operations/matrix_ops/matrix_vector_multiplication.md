# Matrix - Vector Multiplication 
Multiplication of a Matrix into a Vector

**Routine Name:**           mat_vect_mult

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc matrix_vector_multiplication.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o mat_vect_mult matrix_vector_multiplication.cpp

**Description/Purpose:** This routine takes an nXn matrix and an n sized vector, multiplies them together, and returns the resulting n sized vector. Ax = b.

**Input:** This routine takes an nXn matrix and an n sized vector of a numerical data type, both by reference

**Output:** This routine returns an n sized vector of the same numerical data type as those passed in

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for mat_vect_mult

    #include<vector>
    
    template(typename T)
    std::vector mat_vect_mult(std::vector<T>& A[][], std::vector<T>& x[]){
        std::vector<T> b[];
    
        for(int i = 0; i < A[0].size(); i++){
            b[i] = 0;
    
            for(int j = 0; j < x.size(); j++)
                b[i] += (A[i][j] * x[j]);
        }
    
        return b;
    }//mat_vect_mult


**Last Modified:** October/2018
