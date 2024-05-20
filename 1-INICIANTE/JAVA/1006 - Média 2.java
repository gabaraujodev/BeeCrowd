import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double num1, num2, num3;
       
        num1 = input.nextDouble();
       
        num2 = input.nextDouble();
       
        num3 = input.nextDouble();
        
        double media = (num1*2 + num2*3 + num3*5) / 10;
        
        DecimalFormat decimalFormat = new DecimalFormat("0.0");
       
        String formattedNumber = decimalFormat.format(media);
        System.out.println("MEDIA = " + formattedNumber);
    }
}
