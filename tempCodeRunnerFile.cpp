
        a-=1;
        if(a==0){
            std::cout<<"TAK\n";
            continue;
        }
        while(a-b>=0){
            a-=b;
        }

        if(a>0)
            std::cout<<"TAK\n";
        else