class box {
    int height, width, depth;

    boolean isOk(int h, int w, int d) {
        if (h < 100 && w < 50 && d < 20) { // Checking the given data, you can change the default value according to your needs
            return true;
        } else
            return false;

    }

    void error() {
        System.out.println("AN error occured pls follow the instruction and try again!");

    }

    box(int h, int w, int d) {
        if (isOk(h, w, d)) {
            height = h;
            width = w;
            depth = d;
        } else {
            error();
        }

    }

    int vol() {
        return height * width * depth;
    }
}

public class constructor {
    public static void main(String[] args) {
        box b = new box(10, 20, 10);
        System.out.println(b.vol());

    }

}
