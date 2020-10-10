import java.util.Scanner;
	class TestPlayer{
		public static void main(String args[]) {
		int y;
			Scanner sc = new Scanner(System.in);
		String id[] = new String[2];
		String name[]= new String[2];
		double avg []= new double[2];
		int  scores [] = new int[2];
		int no_matches_played[] = new int[2];
		for(int i=0;i<2;i++) {
			System.out.println("Enter The Name, Id, Scores & No Matches Played");
			name[i] = sc.nextLine();
			id[i] = sc.nextLine();
			scores[i] = sc.nextInt();
			no_matches_played[i] = sc.nextInt();
			sc.nextLine();
		}
			Player p1 = new Player(id[0],name[0],no_matches_played[0],scores[0]);
			Player p2 = new Player(id[1],name[1],no_matches_played[1],scores[1]);
	          avg[0] = p1.calculates();		
	          avg[1] = p2.calculates();
	          if(avg[0]> avg[1])
	        	  y=0;
	          else
	        	  y=1;
	          System.out.println("Player with Greatest Average Score:\n Nmae: "+name[y]+"\nId: "+id[y]+"\nScores: "+scores[y]+"\nNo Matches Played: "+no_matches_played[y]+"\nAverage Score: "+avg[0]);
	          sc.close();	  
		}
	}
	 class Player {
	String id,name;
	int scores,no_matches_played;
	Player(String id,String name,int no_matches_played,int scores){
		this.id =id;
		this.name = name;
		this.no_matches_played= no_matches_played;
		this.scores = scores;
	}
	double calculates() {
		double avg = scores/(double)no_matches_played;
		System.out.println("Player: Name: "+name+"\tAverage Score: "+avg);
		return avg;
	}
	}
//
