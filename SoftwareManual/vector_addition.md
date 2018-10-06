# Vector Addition 
Taking two vectors and returns the sum of the elements.

**Routine Name:**           vect_add

**Author:** Michael A. Warren

**Language:** C++. This code can be used using a GNU C++ compiler(gpp)

For example,

    gpp vector_addition.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gpp -o vect_add vector_addition.cpp

**Description/Purpose:** This routine takes two vectors. If the two are not the same size, it adds '0's to the end of the shorter one to make them the same size. It then adds the vectors, component by component.

**Input:** This routine requires two vectors as inputs that take double type elements.

**Output:** This routine returns a single vector of type double that contains the sum of each elements of the two vectors inputted.

**Usage/Example:**

<basic example>
<give the output of the exampled input, if needed>
<how to interpret the output>

**Implementation/Code:** The following is the code for vect_add()

    #include<iostream>
    #include<vector>
    
    //This function takes two vectors and makes them the same size
    void toSameSize(std::vector<double>& v, std::vector<double& u){
        if(u.size() > v.size())
            toSameSize(u,v);
    
        while((v.size() - u.size()) > 0)
            u.push_back(0);
    
        return;
    }//toSameSize
    
    //This function takes two vectors and adds them together
    std::vector vect_add(std::vector<double> v, std::vector<double> u){
        std::vector<double> w;
    
        if(v.size() - u.size() != 0)
            toSameSize(v,u);
    
        for(int i = 0; i < v.size(); i++)
            w.push_back(v[i] + u[i]);
    
        return w;
    }//vect_add


**Last Modified:** October/2018
