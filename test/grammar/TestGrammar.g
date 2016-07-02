grammar TestGrammar;

options {
    language=C;
}

program : HELLO WORLD ;

HELLO : 'Hello' ;
WORLD : 'WORLD' ;
