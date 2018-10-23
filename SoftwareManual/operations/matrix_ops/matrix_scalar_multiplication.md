# Matrix Scalar Multiplication 
This routine multiplies a scalar value to each element of an nXn matrix

**Routine Name:**           mat_scalar

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc matrix_scalar_multiplication.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o mat_scalar matrix_scalar_multiplication.cpp

**Description/Purpose:** This routine takes a matrix and a scalar value and multiplies it through

**Input:** This routine takes a matrix by reference and a scalar value, both of the same numerical data type

**Output:** This routine adjusts the matrix by reference, so it does not have an output

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for mat_scalar()

    #include<vector>
    
    template(typename T)
    void mat_scalar(std::vector<T>& A[][], T s){
        for(int i = 0; i < A[1].size(); i++)
            for(int j = 0; j < A.size(); j++)
                A[i][j] *= s;
    
        return;
    }//mat_scalar


**Last Modified:** October/2018
