/* IN Scanner we can scan the input from any connected devices that could be keyboard , Files or other sources , it can take input every DT  */

import java.util.Scanner;
import java.io.*;

class fileread {

    String filepath = "./test.txt";

    void read() {
        try {
            File file = new File(filepath);
            Scanner cin = new Scanner(file);

            while (cin.hasNextLine()) {
                String text = cin.nextLine();
                System.out.println(text);
            }

            cin.close();
        } catch (FileNotFoundException e) {
            System.out.println("File not found : " + e.getMessage());
        }
    }

}

class KbInput {

    void takeingInput() {
        Scanner cin = new Scanner(System.in);

        while (cin.hasNext()) {
            if (cin.hasNextInt()) {
                int val = cin.nextInt();
                System.out.print(val + " ");
            } else if (cin.hasNextDouble()) {
                double val = cin.nextDouble();
                System.out.print(val + " ");
            } else {
                String val = cin.next(); // String input
                if (val.equals("exit")) // if matches it will terminate the program
                    break;
                System.out.print(val + " ");
            }
        }
        cin.close();
    }
}

public class scanners {
    public static void main(String[] args) {
        /*
         * int sum = 0;
         * Scanner cin = new Scanner(System.in);
         * 
         * while(cin.hasNextInt()){ // hasNExtInt() means it will return true if the
         * next input is in int , if we enter any other DT the program will terminate
         * int j = cin.nextInt();
         * sum+=j;
         * // System.out.println(j);
         * }
         * cin.close();
         * 
         * System.out.println("SUM : "+sum);
         */

        KbInput I = new KbInput();
        I.takeingInput();

        fileread f = new fileread();
        f.read();
    }
}