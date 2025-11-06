class Parent11 {
    void show() {
        System.out.println("parent");
    }
}

class Child11 extends Parent11 {
    void show() {
        System.out.println("child");
    }
}

public class prac11 {
    public static void main(String[] args) {
        Parent11 pa = new Child11();
        pa.show();
    }
}

/*
정답: child
 */
