import java.util.HashSet;
import java.util.Set;

public class prac1 {
    public static void main(String[] args){
        Set a = new HashSet();

        a.add(7);
        System.out.println(a);

        a.add(5);
        System.out.println(a);

        a.add(5);
        System.out.println(a);

        a.remove(5);
        System.out.println(a);

        System.out.println(a.size());

    }

/*
정답:
[7]
[5, 7]
[5, 7]
[7]
1
 */
}