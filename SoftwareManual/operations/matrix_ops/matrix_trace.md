# Trace of a Matrix 
This routine calculates and returns the trace value of an nXn matrix

**Routine Name:**           mat_trace

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gcc)

For example,

    gcc matrix_trace.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gcc -o mat_trace gcc matrix_trace.cpp

**Description/Purpose:** This routine sums together the diagonal values of the nXn matrix and returns that value

**Input:** This routine requires a single nXn matrix of a numerical data type

**Output:** This routine returns the trace value of that matrix of the same numerical data type

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for mat_trace()

    #include<vector>
    
    template(typename T)
    T mat_trace(std::vector<T> A[][]){
        T tr = 0;
    
        for(int i = 0; i < A[1].size(); i++){
            for(int j = 0; j < A.size(); j++){
                if(i == j)
                    tr += A[i][j];
            }
        }
    
        return tr;
    }//mat_trace


**Last Modified:** October/2018
