#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "PotionRecipe.h"
using namespace std;

// AlchemyWorkshop 클래스: 레시피 목록을 관리
class AlchemyWorkshop {
private:
    vector<PotionRecipe> recipes;

public:
    // addRecipe 메서드: 재료 목록(vector)을 매개변수로 받도록 수정
    void addRecipe(const string& name, const vector<string>& ingredients) {
        recipes.push_back(PotionRecipe(name, ingredients));
        cout << ">> 새로운 레시피 '" << name << "'이(가) 추가되었습니다." << endl;
    }

    // 모든 레시피 출력 메서드
    void displayAllRecipes() const {
        if (recipes.empty()) {
            cout << "아직 등록된 레시피가 없습니다." << endl;
            return;
        }

        cout << "\n--- [ 전체 레시피 목록 ] ---" << endl;
        for (size_t i = 0; i < recipes.size(); ++i) {
            cout << "- 물약 이름: " << recipes[i].potionName << endl;
            cout << "  > 필요 재료: ";

            // 재료 목록을 순회하며 출력
            for (size_t j = 0; j < recipes[i].ingredients.size(); ++j) {
                cout << recipes[i].ingredients[j];
                // 마지막 재료가 아니면 쉼표로 구분
                if (j < recipes[i].ingredients.size() - 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        }
        cout << "---------------------------\n";
    }
    void FindbyRacipesName(string name)
    {
        if (recipes.empty()) {
            cout << "아직 등록된 레시피가 없습니다." << endl;
            return;
        }
        cout << "\n--- [ 찾은 레시피 목록 ] ---" << endl;
        for (size_t i = 0; i < recipes.size(); i++)
        {
            if (recipes[i].potionName == name)
            {    
                cout << "- 물약 이름: " << recipes[i].potionName << endl;
                cout << "  > 필요 재료: ";

                // 재료 목록을 순회하며 출력
                for (size_t j = 0; j < recipes[i].ingredients.size(); ++j) {
                    cout << recipes[i].ingredients[j];
                    // 마지막 재료가 아니면 쉼표로 구분
                    if (j < recipes[i].ingredients.size() - 1) {
                        cout << ", ";
                    }
                }
            }

            else
            {
                cout << "찾을 레시피가 더 이상 없습니다." << endl;
                return;
            }
            cout << endl;

        }
        cout << "---------------------------\n";
    }
    void FindbyRecipesIngredient(string Ingredient)
    {
        if (recipes.empty()) {
            cout << "아직 등록된 레시피가 없습니다." << endl;
            return;
        }
        cout << "\n--- [ 찾은 레시피 목록 ] ---" << endl;
        for (size_t i = 0; i < recipes.size(); i++)
        {
            
            if (find(recipes[i].ingredients.begin(), recipes[i].ingredients.end(), Ingredient) != recipes[i].ingredients.end())
            {

                cout << "- 물약 이름: " << recipes[i].potionName << endl;
                cout << "  > 필요 재료: ";

                // 재료 목록을 순회하며 출력
                for (size_t j = 0; j < recipes[i].ingredients.size(); ++j) {
                    cout << recipes[i].ingredients[j];
                    // 마지막 재료가 아니면 쉼표로 구분
                    if (j < recipes[i].ingredients.size() - 1) {
                        cout << ", ";
                    }
                }
                cout << endl;
            }
            
            else
            {
                cout << "찾은 레시피가 없습니다." << endl;
                return;
            }
        }
        cout << "---------------------------\n";
        
    }
};