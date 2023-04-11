# trabalhoTP1
Repositório do primeiro trabalho de TP1.

## Trello do projeto:

  * Ler e se atentar aos REQUISITOS GERAIS do projeto
    https://trello.com/b/qLcxOvE7/trabalhotp1
  
## Padrão de estilo Google:

  1. No VsCode Go Preferences -> Settings
  2. Search for C_Cpp.clang_format_fallbackStyle
  3. Click Edit, Copy to Settings
  4. Change from "Visual Studio" to ""C_Cpp.clang_format_fallbackStyle": "{ BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 0}"
  
## Extensões:1
    
 1. Ferramentas:
   * Doxygen Documentation Generator
    
 2. Formatação:  
  * Better C++ Syntax
  * Prettier - Code formatter
    
 3. Git:
  * Git History
  * GitHub Repositories
  * GitLens
  * Remote Explorer
    
## Comando do GIT:
 * **git init**: Inicializa um repositório Git em um diretório local.
 * **git clone**: Clona um repositório Git existente de um servidor remoto.
 * **git add**: Adiciona alterações ou novos arquivos ao índice do Git.
 * **git commit**: Salva as mudanças feitas no índice em um novo commit.
 * **git push**: Envio os commits para um servidor remoto.
 * **git pull**: Baixa e integra as alterações mais recentes de um repositório remoto.
 * **git branch**: Lista, cria ou exclui branches.
 * **git merge**: Integra duas ou mais branches em uma única.
 * **git checkout**: Muda para uma branch específica ou restaura um arquivo para um estado anterior.
 * **git log**: Mostra um registro completo de todos os commits feitos no repositório.
 * **git status**: Mostra o estado atual do repositório, incluindo os arquivos que foram alterados ou adicionados.

## Modificando o __main__:
 1. Clone o repositório remoto com o comando `git clone url-repositorio`.
 2. Crie um novo branch local com o nome do recurso que está trabalhando usando o comando `git checkout -b nome-branch`.
 3. Faça as alterações necessárias no código e adicione essas mudanças ao índice com o comando `git add nome-arquivo`.
 4. Faça um commit das mudanças com o comando `git commit -m "Mensagem de commit"`.
 5. Envie o branch local para o repositório remoto com o comando `git push origin nome-branch`.
 6. Abra uma nova solicitação de pull no GitHub para mesclar as alterações do branch criado com o branch `main`.
 7. Aguarde a revisão da equipe e aprove o seu pull request no GitHub.
 8. Se o pull request for aprovado, o código será mesclado com o branch `main`.
 9. Atualize seu branch local com as alterações do branch `main` usando o comando `git pull origin main`.

 Mantenha o repositório atualizado e não faça alterações direto no branch main. Utilize o processo de pull request para garantir que todas as alterações sejam revisadas e aprovadas antes de serem mescladas com o branch principal.

