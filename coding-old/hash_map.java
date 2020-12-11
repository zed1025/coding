/*
	https://www.geeksforgeeks.org/hashmap-class-methods-java-examples-set-1-put-get-isempty-size/

*/
import java.util.*;


public class hash_map{
	public static void main(String[] args){
		//creation of HashMap
		HashMap<Integer, String> geeks = new HashMap<>();

		//adding values to HashMap
		geeks.put(1, "Amit");
		geeks.put(2, "Priya");
		geeks.put(3, "Manju");

		//Testing the isEmpty() method
		if(!geeks.isEmpty()){
			System.out.println("geeks HashMap is not empty.");
			//accessing the contents of the HashMap
			for(int i=0; i<3; i++){
				System.out.println("Geek " + i+1 +": " + geeks.get(i+1));
			}	
		}



		//printing the size of the HashMap
		System.out.println("geeks HashMap is of size:  " + geeks.size());
	}
}