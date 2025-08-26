#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// PotionRecipe Ŭ����: ��� ����� vector<string>���� ����
class PotionRecipe {
public:
    string potionName;
    vector<string> ingredients; // ���� ��ῡ�� ��� '���'���� ����

    // ������: ��� ����� �޾� �ʱ�ȭ�ϵ��� ����
    PotionRecipe(const string& name, const vector<string>& ingredients)
        : potionName(name), ingredients(ingredients) {
    }
};