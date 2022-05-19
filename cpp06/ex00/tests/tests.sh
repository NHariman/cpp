RED='\033[0;31m'
CYAN='\033[0;36m'
NC='\033[0m' # No Color

printf "${RED}>>> testing basic conversions${NC}\n"
printf "${CYAN} > ../convert 0${NC}\n"
../convert 0
printf "\n${CYAN} > ../convert -2147483648 (int min)${NC}\n"
../convert -2147483648

printf "\n${CYAN} > ../convert 2147483647 (int max)${NC}\n"
../convert 2147483647

printf "\n${CYAN} > ../convert -2147483649 (over int min)${NC}\n"
../convert -2147483649

printf "\n${CYAN} > ../convert 2147483648 (over int max)${NC}\n"
../convert 2147483648

printf "\n${CYAN} > ../convert 42${NC}\n"
../convert 42

printf "\n${CYAN} > ../convert *${NC}\n"
../convert '*'

printf "\n${CYAN} > ../convert 42.0${NC}\n"
../convert 42.0

printf "\n${CYAN} > ../convert 42.42${NC}\n"
../convert 42.42

printf "\n${CYAN} > ../convert NaN${NC}\n"
../convert NaN

printf "\n${CYAN} > ../convert inf${NC}\n"
../convert inf

printf "\n${CYAN} > ../convert -inf${NC}\n"
../convert -inf

printf "\n${RED}>>> error testing${NC}\n"

printf "\n${CYAN} > ../convert multiple arguments${NC}\n"
../convert multiple arguments

printf "\n${CYAN} > ../convert (no arguments)${NC}\n"
../convert 