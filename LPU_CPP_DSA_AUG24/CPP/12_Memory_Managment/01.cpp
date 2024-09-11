//Memory managment

/*
    - Each variable uses space on computer's memory to store it's value
    - When we use the term allocate, we indicate that the variable has been given a space on the computer's memory.
    - Deallocation means space has been reclaimed by computer and the variable cannot be accessed now.

    - Memory allocation in cpp is done by two methods.
        One of them is Static Memory Allocation which is also called Compile time allocation.
        And the other one is known as Dynamic memory allocation which is also known as Run Time time Allocation.

    *Satic Memory Allocation

    In static memory allocation, size and location where variable will be stored is fixed durinf compile time.

    main(){
        int x;
        char ch;
        int arr[100];
    }

    - In this, compiler calculates hpw much memory these variable(c,ch,arr) will need and fix a location where these variables will be created.

    - location of where variables swill be stored is saved, but actual physical memory is not allocated at compile time.

    - Actual physical memory is allocated at runtime.

    - Static memory allocation is slightly faster than dynamic.
    - Allocation and deallocation of memory is done by the copiler itself;


    *Dynamic Memory allocation (DMA)

    - DMA, allows you to define memory requirement during execution of the program.

    - DMA uses a special type of memory called as heap memory.

    - here, new keyword is used to allocate memory and delete keyword is used to deallocate m

    - Unlike static memory allocation, allocation and deallocation of memory should be done by the programmer

    main(){
        
        int n;

        cin >> n;

        int *arr new int[n];
        for(int i = 0; i < n ;i ++){
        cin >> arr[i]
        }


        delete []arr;
    }





*/