#Script para compilar e executar arquivos em c
#$1 é responsavel por ler o nome de arquivo apos o comando de execução
#Digitar apenas o nome sem o tipo de extensão
gcc $1.c -o $1
echo "Compilando...."
./$1
