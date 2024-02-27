#include <stdio.h>

int main(){
    int i, alunos, j, nota7;
    float nota;
    
    for(i = 1; i <= 3; ++i){
        printf("Alunos da turma %d: ", i);
        scanf("%d", &alunos);
        
        for(j = 1; j <= alunos; ++j){
            do{
			printf("Nota do aluno %d: ", j);
            scanf("%f", &nota);
			}
			while(nota < 0 || nota > 10);
            
            if(nota > 7)
            ++nota7;
        }
        
        printf("O total de alunos com nota > 7 eh: %d.\n", nota7);
        nota7 = 0;
    }
    
    return 0;
}