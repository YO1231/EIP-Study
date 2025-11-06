public class Impl{
// prac3
    public static void main(String args[]){
        int a = 12, b = 5, sum = 2;
        b *= a /= 4;
        sum += ++a * b-- / 4;
        System.out.printf("%d", sum);

    }
}

/*
정답: 17
 */