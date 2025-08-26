#include "PotionRecipe.h"
#include "AIchemyWorkshop.h"
using namespace std;

int main() {
    AlchemyWorkshop myWorkshop;

    while (true) {
        cout << "⚗️ 연금술 공방 관리 시스템" << endl;
        cout << "1. 레시피 추가" << endl;
        cout << "2. 모든 레시피 출력" << endl;
        cout << "3. 레시피 이름으로 레시피 검색" << endl;
        cout << "4. 레시피 재료로 레시피 검색" << endl;
        cout << "5. 종료" << endl;
        cout << "선택: ";

        int choice;
        cin >> choice;

        if (cin.fail()) {
            cout << "잘못된 입력입니다. 숫자를 입력해주세요." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (choice == 1) {
            string name;
            cout << "물약 이름: ";
            cin.ignore(10000, '\n');
            getline(cin, name);

            // 여러 재료를 입력받기 위한 로직
            vector<string> ingredients_input;
            string ingredient;
            cout << "필요한 재료들을 입력하세요. (입력 완료 시 '끝' 입력)" << endl;

            while (true) {
                cout << "재료 입력: ";
                getline(cin, ingredient);

                // 사용자가 '끝'을 입력하면 재료 입력 종료
                if (ingredient == "끝") {
                    break;
                }
                ingredients_input.push_back(ingredient);
            }

            // 입력받은 재료가 하나 이상 있을 때만 레시피 추가
            if (!ingredients_input.empty()) {
                myWorkshop.addRecipe(name, ingredients_input);
            }
            else {
                cout << ">> 재료가 입력되지 않아 레시피 추가를 취소합니다." << endl;
            }

        }
        else if (choice == 2) {
            myWorkshop.displayAllRecipes();

        }
        else if (choice == 3)
        {
            string name;
            cout << "찾을 레시피 입력: ";
            cin.ignore(10000, '\n');
            getline(cin, name);
            myWorkshop.FindbyRacipesName(name);
        }
        else if (choice == 4)
        {
            string name;
            cout << "찾을 재료 입력: ";
            cin.ignore(10000, '\n');
            getline(cin, name);
            myWorkshop.FindbyRecipesIngredient(name);
        }
        else if (choice == 5) {
            cout << "공방 문을 닫습니다..." << endl;
            break;

        }
        else {
            cout << "잘못된 선택입니다. 다시 시도하세요." << endl;
        }
    }

    return 0;
}