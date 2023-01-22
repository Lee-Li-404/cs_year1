import java.util.Scanner;
public class CalcScore{
   public static void main(String args[]){
      Scanner sc = new Scanner(System.in);
      double percent = sc.nextDouble();
      double score = 100*((0.93 - (percent)*0.8)/0.2);
      System.out.println("score needed: "+score);
      sc.close();
   }
}