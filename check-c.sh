question_num=$1
docker-compose run gcc bash -c "gcc -g -o src/q${question_num}.out src/q${question_num}.cpp && src/q${question_num}.out"