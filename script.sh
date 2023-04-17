g++ -w -c Medicamento.cpp -o bin/Medicamento.o
g++ -w -c Persona.cpp -o bin/Persona.o
g++ -w -c Persona_Paciente.cpp -o bin/Persona_Paciente.o
g++ -w -c Principal.cpp -o bin/Principal.o
g++ -w -Lbin -o bin/Principal bin/Medicamento.o bin/Persona.o bin/Persona_Paciente.o bin/Principal.o
bin/Principal