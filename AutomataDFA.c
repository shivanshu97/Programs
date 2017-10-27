#include<stdio.h>
char h,e,l,q,o;
    void he();
    void hel();
    void hell();
    void hello();
	void abc(){
		printf("\nenter first character\n");
		scanf("%s",&h);
		if(h=='h')
		{
			printf("string accepted");
			he();
		}
		else{
			printf("character rejected \ngo back to first character");
			printf("\nlength of your string was 0");
			abc();
		}
	}
	void he(){
		printf("\nenter second character\n");
		scanf("%s",&e);
		if(e=='e'){
				printf("character accepted");
				hel();
		}
		else{
			printf("character rejected \ngo back to first character");
			printf("\nlength of your string was 1");
			abc();
		}		
	}
		void hel(){
		printf("\nenter third character\n");
		scanf("%s",&l);
		if(l=='l'){
				printf("character accepted");
				hell();
		}
		else{
			printf("character rejected \ngo back to first character");
			printf("\nlength of your string was 2");
			abc();
		}		
	}	void hell(){
		printf("\nenter fourth character\n");
		scanf("%s",&q);
		if(q=='l'){
				printf("character accepted");
				hello();
		}
		else{
			printf("character rejected \ngo back to first character");
			printf("\nlength of your string was 3");
			abc();
		}		
	}	void hello(){
		printf("\nenter fifth character\n");
		scanf("%s",&o);
		if(o=='o'){
				printf("character accepted and end of DFA automata \n");
				
		}
		else{
			printf("character rejected \ngo back to first character");
			printf("\nlength of your string was 4");
			abc();
		}		
	}

int main(){
	
	abc();
	
	
	
}	 

