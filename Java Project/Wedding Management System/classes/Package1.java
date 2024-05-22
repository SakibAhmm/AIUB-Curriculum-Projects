package classes;
public class Package1
{
	public String decoration = "Low Range decoration";
	public String foodItem = "Polao,Roast and Beef";
	public String venue = "Small---Capacity = 150 People ";
	
	public int package1Cost = 75000;
	public Package1(){}
	public void showPackageInfo(){
		System.out.println("\t\t\tDecoration = "+decoration);
		System.out.println("\t\t\tFood Item = "+foodItem);
		System.out.println("\t\t\tVenue = "+venue);
		System.out.println("\t\t\tTotal Cost : "+package1Cost);
		System.out.println(" ");
	}
}