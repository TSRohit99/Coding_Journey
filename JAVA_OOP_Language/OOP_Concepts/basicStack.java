// OOP_Concepts;

class stk {

    int top = 0;
    int sz = 0;
    int s[];

    boolean isOk(int d) {
        if (d < 100) // Checking the given data, you can change the default value according to your
                     // needs
            return true;
        else
            return false;
    }

    void error() {
        System.out.println("An error occured pls follow the instruction and try again!");

    }

    stk(int ArrSz) {
        if (isOk(ArrSz)) {
            sz = ArrSz;
            s = new int[sz];
        } else
            error();

    }

    void push(int data) {
        if (top == sz)
            System.out.println("Stack overflow!! ");

        s[top] = data;
        top++;

    }

    int pop() {
        if (top == 0) {
            System.out.println("Stack empty!! ");
            return 404;
        } else {
            int temp = s[--top];
            return temp;
        }
    }

    void __printer() {
        for (int i = top - 1; i >= 0; i--) {
            System.out.print(" " + s[i]);
        }
    }

}

public class basicStack {
    public static void main(String[] args) {
        stk st = new stk(15);
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        // st.__printer();
        st.pop();
        st.pop();
        st.pop();

        st.__printer();

    }

}
