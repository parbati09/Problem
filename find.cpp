bool findPair(int a[], int n, int x){

    //code

    unordered_set<int> s;

    for(int i = 0;i<n;i++){

        s.insert(a[i]);

    }

    for(int i = 0;i<n;i++)

        if(s.count(x+a[i]))

            return 1;

    return -1;

    

}

