
class id{
    int Id;
    String name;
    id(int i, String nm){
        Id=i;
        name=nm;
    }
    boolean equals( id user1){
        return (Id==user1.Id)? true:false;
    }
}

// class check{
//     check(id user, id user2){
//         if(user.Id> user2.Id)
//          System.out.println("Workingg");
//     }
// }

class num{
    void sq(int a, int b){
        a*=a;
        b*=b;
    }

    int i,j;
    num(int l, int k){
        i=l;
        j=k;
    }

    void sq(num n){
        i=n.i*n.i;
        j=n.j*n.j;
    }
}

public class callbyref{
    public static void main(String[] args) {
        id user = new id(10, "Rohit");
        id user1 = new id(100, "Rohittttt");
     // check ck= new check(user, user1);
        if(user.equals(user1))
           System.out.println("Both ID are equal sir");
        else
           System.out.println("Distinct IDs");
           int a=10,b=20;

        num n= new num(10,20);
        //  num n1= new num(15,20);
        n.sq(a, b); //call by value
         System.out.println(a+" "+b);
         n.sq(n);
         System.out.println(n.i+" "+ n.j);

    }
}