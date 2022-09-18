/*
 * Exc-series.c
 * 
 * Faça um programa que vai indicar uma série para o usuário assistir considerando uma
sequência de perguntas.
 * 
========================================
|-------------  DRAMA------------------|
|___________________________  ________ |
|	s/s/s_______= Lost________________ |
|	s/s/n/s_____= GOT_________________ |
|	s/s/n/n_____= Mandalorian_________ |
|	s/n/s/s_____= Xfiles______________ |
|	s/n/s/n/s___= house_______________ |
|	s/n/s/n/n___= mansao bly_________  |
|	s/n/n/s_____= breaking___________  |
|	s/n/n/n/s___= house of cars______  |
|	s/n/n/n/n___= euphoria____________ |
|                                      |
|--------------COMEDIA------------------
|                                      |
|	n/s/s_______= HIMYM______________  |
|	n/s/n/s_____= glee_______________  |
|	n/s/n/n/s___= big bang__________   |
|	n/s/n/n/n___= b99________________  |
|                                      |
|----------------ACAO-------------------
|                                      |
|	n/n/s/s/s___= homeland____________ |
|	n/n/s/s/n/s_=walkind dead_________ |
|	n/n/s/s/n/n_= amor, morte e robos  |
|	n/n/s/n/s___= CSI_________________ |
|	n/n/s/n/n/s_= dexter____________   |
|	n/n/s/n/n/n_= cavaleiro da lua____ |
|	n/n/n_______= The owl house certo  |_
========================================
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	
	char car;
	
	printf(" --------------------------------------------------------\n");
	printf(" | \t Programa para indicar otimas series!           | \n");
	printf(" | \t Voce deseja uma Serie com drama?               |\n");
	printf(" | \t 'S' ou 'N'                                     |\n");
	printf(" --------------------------------------------------------\n");
	__fpurge(stdin);

	scanf("%c", &car);
	
	
	//estamos no drama

	if (car == 'S' || car == 's'){
		
		printf(" --------------------------------------------------------\n");
		printf(" | Voce deseja uma serie de Aventura?                   |\n");
		printf(" --------------------------------------------------------\n");
		__fpurge(stdin);
		scanf("%c", &car);

		//entramos no aventura
		if (car == 'S' || car == 's'){
			
			printf(" --------------------------------------------------------\n");
			printf(" | Voce deseja assistir algo com Suspense?              |\n");
			printf(" --------------------------------------------------------\n");
			__fpurge(stdin);			
			scanf("%c", &car);

			//entramos no suspense
			if (car == 'S' || car == 's') {
				
				printf(" ---------------------------------------------------------\n");
				printf(" |Recomendo que voce assista 'Lost', porem, cuidado para | \n | nao se decepcionar.                                   | \n");
				printf(" ---------------------------------------------------------\n");
				
				//saimos do suspense
			}else if (car == 'N' || car == 'n') {
				
				printf(" --------------------------------------------------------\n");
				printf(" | Voce gosta de Fantasia?                              |\n");
				printf(" --------------------------------------------------------\n");
				__fpurge(stdin);
				scanf("%c", &car);
				
				//entramos no fantasia
				if (car == 'S' || car == 's') {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Recomendo que voce assista Game Of Thrones, porem,   |\n | nao se apegue a ninguem, e cuidado para nao se       |\n | decepcionar...                                       |\n");
					printf(" --------------------------------------------------------\n");
		
					//saimos do fantasia
				}else if (car == 'N' || car == 'n'){
					
					printf(" --------------------------------------------------------\n");
					printf(" | A Serie indicada para 'Drama e Aventura' e The       |\n | Mandalorian.                                         |\n");
					printf(" --------------------------------------------------------\n");
					
				} else {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Caractere invalido... Tente outra vez...             |\n");
					printf(" --------------------------------------------------------\n");
				}
				
			}else {
				
					printf(" --------------------------------------------------------\n");
					printf(" | Caractere invalido... Tente outra vez...             |\n");
					printf(" --------------------------------------------------------\n");
			}
			
			//nao estamos mais no aventura
		}else if (car == 'N' || car == 'n'){
			
			printf(" --------------------------------------------------------\n");
			printf(" | Voce deseja assistir algo com Misterio?              |\n");
			printf(" --------------------------------------------------------\n");
			__fpurge(stdin);
			scanf("%c", &car);
			
			//entramos no misterio
			if (car == 'S' || car == 's') {
				
				printf(" --------------------------------------------------------\n");
				printf(" | Voce gosta de Sci-Fi?                                |\n");
				printf(" --------------------------------------------------------\n");
				__fpurge(stdin);
				scanf("%c", &car);
				
					//estamos dentro do sci-fi
				if (car == 'S' || car == 's') {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Recomendo para voce X-Files, tem uma otima intro,    |\n | aproveite!                                           |\n");
					printf(" --------------------------------------------------------\n");
					
					//saimos do Sci-Fi
				} else if (car == 'N' || car == 'n') {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Voce gosta de serie de Medicos?                      |\n");
					printf(" --------------------------------------------------------\n");
					__fpurge(stdin);
					scanf("%c", &car);
					
					//entramos no medico
					if (car == 'S' || car == 's'){
						
						printf(" --------------------------------------------------------\n");
						printf(" | Recomendo a serie Doutor House.                      |\n");
						printf(" --------------------------------------------------------\n");
						
						//saimos do medico
					}else if (car == 'N' || car == 'n') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Recomendo a serie A maldicao da Mansao Bly           |\n");
						printf(" --------------------------------------------------------\n");
						
					}else {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Caractere nao aceito... tente novamente...           |\n");
						printf(" --------------------------------------------------------\n");
					}
					
				} else {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Caractere invalido... Tente outra vez...             |\n");
					printf(" --------------------------------------------------------\n");
					
				}

			//saimos do Misterio
			}else if (car == 'N' || car == 'n') {
				
				printf(" --------------------------------------------------------\n");
				printf(" | Voce gosta de Crime?                                 |\n");
				printf(" --------------------------------------------------------\n");
				__fpurge(stdin);
				scanf("%c", &car);
				
				//entramos n o crime
				if (car == 'S' || car == 's') {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Recomendo a serie 'Breaking Bad'.                    |\n");
					printf(" --------------------------------------------------------\n");
					
				//saimos do crime	
				}else if (car == 'N' || car == 'n') {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Voce gosta de series politicas?                      |\n");
					printf(" --------------------------------------------------------\n");
					__fpurge(stdin);
					scanf("%c", &car);
					
					//entramos na politica
					if (car == 'S' || car == 's') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Recomendo para voce a serie 'House of Cards'.        |\n");
						printf(" --------------------------------------------------------\n");
					
					//saimos da politica	
					}else if (car == 'N' || car == 'n') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Recomendo pra voce a serie 'Euphoria', otima serie,  |\n | aproveite.                                           |\n");
						printf(" --------------------------------------------------------\n");
						
					}else {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Caractere nao identificado... Tente novamente...     |\n");
						printf(" --------------------------------------------------------\n");
						
					}
					
				} else {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Caractere nao identificado... Tente novamente...     |\n");
					printf(" --------------------------------------------------------\n");
					
				}
				
			}else {
				
				printf(" --------------------------------------------------------\n");
				printf(" | Caractere nao identificado... tente novamente...     |\n");
				printf(" --------------------------------------------------------\n");
			}
		}else {
			
				printf(" --------------------------------------------------------\n");
				printf(" | Caractere nao identificado... tente novamente...     |\n");
				printf(" --------------------------------------------------------\n");			
		}
		
		//Saimos do drama
	} else if (car == 'N' || car == 'n'){
		
		printf(" --------------------------------------------------------\n");
		printf(" | Voce gosta de Comedia?                               |\n");
		printf(" --------------------------------------------------------\n");
				__fpurge(stdin);
				scanf("%c", &car);
		
		//entramos na comedia
		if (car == 'S' || car == 's') {
			
			printf(" --------------------------------------------------------\n");
			printf(" | Voce gosta de Romance?                               |\n");
			printf(" --------------------------------------------------------\n");
				__fpurge(stdin);
				scanf("%c", &car);
			
			//entramos no romance	
			if (car == 'S' || car == 's') {
				
				printf(" --------------------------------------------------------\n");
				printf(" | Recomendo a serie 'How I Met Your Mother'            |\n");
				printf(" --------------------------------------------------------\n");
			
			//saimos do romance	
			}else if (car == 'N' || car == 'n') {
				
				printf(" --------------------------------------------------------\n");
				printf(" | Voce gosta de Musical?                               |\n");
				printf(" --------------------------------------------------------\n");
				__fpurge(stdin);
				scanf("%c", &car);
					
				//entramos no Musical
				if (car == 'S' || car == 's') {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Recomendo a serie 'Glee'.                            |\n");
					printf(" --------------------------------------------------------\n");
				
				//saimos do musical
				}else if (car == 'N' || car == 'n') {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Voce gosta de serie de Nerd?                         |\n");
					printf(" --------------------------------------------------------\n");
					__fpurge(stdin);
					scanf("%c", &car);
					
					//entramos no Nerd
					if (car == 'S' || car == 's') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Recomendo a serie 'The Big Bang Theory'...           |\n |\t BAZINGA                                        |\n");
						printf(" --------------------------------------------------------\n");
					
					//saimos do Nerd	
					}else if (car == 'N' || car == 'n') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Recomendo a serie 'Brooklyn Nine-Nine'...            |\n ");
						printf("--------------------------------------------------------\n");
						
					} else {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Caractere nao identificado... tente novamente...     |\n");
						printf(" --------------------------------------------------------\n");

						
					}
					
				}else {
					
					  printf(" --------------------------------------------------------\n");
					  printf(" | Caractere nao identificado... tente novamente...     |\n");
					  printf(" --------------------------------------------------------\n");

					
				}
				
			}else {
				
				printf(" --------------------------------------------------------\n");
				printf(" | Caractere nao identificado... tente novamente...     |\n");
				printf(" --------------------------------------------------------\n");
				
			}
		
		//saimos da comedia	
		}else if (car == 'N' || car == 'n') {
			
			printf(" --------------------------------------------------------\n");
			printf(" | Voce gosta de serie de Acao?                         |\n");
			printf(" --------------------------------------------------------\n");
			__fpurge(stdin);
			scanf("%c", &car);
			
			//entramos no acao
			if (car == 'S' || car == 's') {
			
			printf(" --------------------------------------------------------\n");
			printf(" | Voce gosta de serie de Drama?                        |\n");
			printf(" --------------------------------------------------------\n");
			__fpurge(stdin);
			scanf("%c", &car);
			
				//entramos no drama
				if (car == 'S' || car == 's'){
					
					printf(" --------------------------------------------------------\n");
					printf(" | Voce gosta de serie de Misterio?                     |\n");
					printf(" --------------------------------------------------------\n");
					__fpurge(stdin);
					scanf("%c", &car);
					
					//entramos no misterio
					if (car == 'S' || car == 's') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Recomendo a serie 'Homeland'.                        |\n");
						printf(" --------------------------------------------------------\n");
						
						//saindo do misterio
					} else if (car == 'N' || car == 'n') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Voce gosta de serie de Terror?                       |\n");
						printf(" --------------------------------------------------------\n");
						__fpurge(stdin);
						scanf("%c", &car);
						
						//entrando no terror
						if (car == 'S' || car == 's') {
							
							printf(" --------------------------------------------------------\n");
							printf(" | Recomendo a serie 'The Walking Dead'.                |\n");
							printf(" --------------------------------------------------------\n");
						
						//saindo do terror	
						}else if (car == 'N' || car == 'n') {
							
								printf(" --------------------------------------------------------\n");
								printf(" | Recomendo a serie 'Amor, Morte e Robos'.             |\n");
								printf(" --------------------------------------------------------\n");
							
						} else {
							
							printf(" --------------------------------------------------------\n");
							printf(" | Caractere nao identificado... tente novamente...     |\n");
							printf(" --------------------------------------------------------\n");							
						}
						
					} else {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Caractere nao identificado... tente novamente...     |\n");
						printf(" --------------------------------------------------------\n");						
					}
					
					//saindo do Drama
				}else if (car == 'N' || car == 'n') {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Voce gosta de serie de Policial?                     |\n");
					printf(" --------------------------------------------------------\n");
					__fpurge(stdin);
					scanf("%c", &car);
				
							//entramos na serie Policial
					if (car == 'S' || car == 's') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Recomendo a serie 'CSI'.                             |\n ");
						printf("--------------------------------------------------------\n");
						
						
						//saindo do POlicial
					}else if (car == 'N' || car == 'n') {
						
						printf(" --------------------------------------------------------\n");
						printf(" | Voce gosta de serie de de Crime?                     |\n");
						printf(" --------------------------------------------------------\n");
						__fpurge(stdin);
						scanf("%c", &car);	
							
							//entramos no crime
							if (car == 'S' || car == 's') {
								printf(" --------------------------------------------------------\n");
								printf(" | Recomendo a serie Dexter, cuidado para nao se        |\n | decepcionar com o Final...                           |\n");
								printf(" --------------------------------------------------------\n");
								
							//saimos do crime	
							}else if (car == 'N' || car == 'n') {
								
								printf(" --------------------------------------------------------\n");
								printf(" | Recomendo a serie 'O cavaleiro da Lua.'              |\n");
								printf(" --------------------------------------------------------\n");
								
							}else {
								
								printf(" --------------------------------------------------------\n");
								printf(" | Caractere nao identificado... tente novamente...     |\n");
								printf(" --------------------------------------------------------\n");							
							}
					
				}else {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Caractere nao identificado... tente novamente...     |\n");
					printf(" --------------------------------------------------------\n");					
				}
				
				//saimos do acao
			}else {
					
				printf(" --------------------------------------------------------\n");
				printf(" | Caractere nao identificado... tente novamente...     |\n");
				printf(" --------------------------------------------------------\n");					
				}
				
			}
				
				else if (car == 'N' || car == 'n') {
				
				printf(" --------------------------------------------------------\n");
				printf(" | Recomendo que voce assista 'The Owl House', garanto  |\n | que vai se apaixonar.                                |\n");
				printf(" --------------------------------------------------------\n");
				}
				else {
					
					printf(" --------------------------------------------------------\n");
					printf(" | Caractere nao identificado... tente novamente...     |\n");
					printf(" --------------------------------------------------------\n");					
				}
				
			
		}else {
			
			printf(" --------------------------------------------------------\n");
			printf(" | Caractere nao identificado... tente novamente...     |\n");
			printf(" --------------------------------------------------------\n");	
			
		}
		
	} else {
		
		printf(" --------------------------------------------------------\n");
		printf(" | Caractere nao identificado... tente novamente...     |\n");
		printf(" --------------------------------------------------------\n");		
	} 

	printf(" ========================================================\n");
	printf(" *                                                      *\n");
	printf(" * \tTeste Terminado, volte Sempre.                  *\n");
	printf(" *                                                      *\n");
	printf(" ========================================================\n");
	
	return 0;
}

