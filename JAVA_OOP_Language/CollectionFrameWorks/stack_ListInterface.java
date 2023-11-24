import java.util.Stack;

public class stack_ListInterface {
    public static void main(String[] args) {
        Stack<String> stk = new Stack<>();
        stk.push("Rohit");
        stk.push("Kumar");
        stk.push("Sen");
        System.out.println(stk);
        stk.pop();
        System.out.println(stk.peek());
        System.out.println(stk.empty());

    }
}
