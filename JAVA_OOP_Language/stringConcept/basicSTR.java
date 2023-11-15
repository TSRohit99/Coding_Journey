
public class basicSTR {
    public static void main(String[] args) {
        // String str= "CSE";
        // // String age= "20";
        // float age = 20.45f; // we can use int double as well
        // String st = "Your Age" + age + " Dept "+ str; //concatenation
        // System.out.println(st); 
        // String j= "Four"+2+2; // four22 op with Strring
        // String jk= "Four"+(2+2);// four4  it will bracket first BODMAS
        // String jl= 2+2+"Four"+2+2; //4four22 first int op then string op
        // System.out.println(j);
        // System.out.println(jk);
        // System.out.println(jl);

        //there are other comp methods

        // st.startsWith(jl);
        // st.regionMatches(0, jl, 0, 0);
        // st.endsWith(jl);


        //comapare to 

        String str[]= {"Rohit", "Efa", "Dina"};

        for(int i=0; i<str.length; i++){
            for(int j=0; j<str.length - i -1; j++){
                if(str[j].compareTo(str[j+1])>0){ // compareTo returns >0 means first one ig bigger <0 then first one smaller and =0 means both are equal
                   String temp= str[j];
                   str[j]=str[j+1];
                   str[j+1]=temp;
                }
            }
        }

        for(String x : str){
            System.out.println(x);
        }

        
    }
}
