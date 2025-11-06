class A {
    int a;
    public A(int a){this.a = a;}
    void display(){System.out.println("a=" + a);}
}

class B extends A{
    public B(int a) {
        super(a);
        super.display();
    }
}

public class prac8{
    public static void main(String[] args){
        B obj = new B(10);
    }
}

/*
정답:
a=10

 */