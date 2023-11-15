public class StrSearch {
    public static void main(String[] args) {
        

        //String obj is immutable
        String s= "I am from BD";
        System.out.println(s.indexOf("am")); //2
        System.out.println(s.indexOf("m")); //3
        System.out.println(s.indexOf("z")); //-1 bcz niot in string
        // System.out.println(str.indexOf("Efa"));

        String S1= "North EAst";
        // String S2= S1+"Uni";
        String S2= S1.concat(" Uni");
        String S3 = S2.replace("Uni", "University"); // String cant be modified on its variable we have to modify and store it another variable. replace changes the current String to new one it can do for all as well
        System.out.println(S2);//North EAst Uni
        System.out.println(S3);//North EAst University 


        //trim() removes the whitespaces from the beigining and end of the string
        String r = "  Hey Rohit  !  ";
        System.out.println(r.trim()); //Hey Rohit  !

        //subString() gives you an part of String
        String p= "Hello Team RED";
        System.out.println(p.substring(5, 10)); //     Team
        System.out.println(p.substring(5, 10).trim()); //Team (it removes the whitespaces from beg and end )


    }
}
