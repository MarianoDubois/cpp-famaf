#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
int max_sub_array_sum() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector<ll> nums(n), psums(n + 1);
	for (auto& i : nums) cin >> i;
	psums[0] = 0;
	for (int i = 1; i < n + 1; ++i) {
		psums[i] = psums[i - 1] + nums[i - 1];
	}
	ll res = nums[0], prevmin = 0;
	for (int i = 1; i < n + 1; ++i) {
		res = max(res, psums[i] - prevmin);
		prevmin = min(prevmin, psums[i]);
	}
	cout << res << '\n';
	return 0;
}

int fence() {
	int n, k;
	cin >> n >> k;
	vector<int> fence(n), psums(n + 1);
	for (auto& i : fence) cin >> i;
	psums[0] = 0;
	for (int i = 0; i < n; ++i) {
		psums[i + 1] = psums[i] + fence[i];
	}
	int res = 0, cmp = psums[k];
	for (int i = k; i < n + 1; ++i) {
		if (psums[i] - psums[i - k] < cmp) {
			cmp = psums[i] - psums[i - k];
			res = i - k;
		}
	}
	cout << ++res << '\n';
	return 0;
}

int cuenta_largo_vector() { //probablemente esto deberia ir antes de las otras 2 funciones que escribi antes
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// Declaro un vector
	vector<int> vect;
	// Leo su largo
	int n;
	cin >> n;
	int e;
	// Leo n elementos y los agrego al vector con push_back()
	for (int i = 0; i < n; ++i) {
		cin >> e;
		vect.push_back(e);
	}
	// Accedo al primer elemento
	cout << vect[0] << '\n';
	// Pregunto el tamaño del vector
	cout << vect.size() << '\n';
	return 0;
}

int km_stones() {//GOOGLEAR MAS TARDE PA QUE SIRVE O QUE HACE EXACTAMENTE
	long long n;
	vector<long long> current;//inicializa el vector para hacer iteraciones
	long long cur;
	cin >> n;//pido un valor por consola del largo que quiero que sea el vector
	long long i = 0;//inicializa el iterador???
	vector<long long> partial_unord;//crea el vector donde se va a guardar las cosas sin ordenar?
	partial_unord.push_back(0);//le agrega a la lista al final el elemento int(0)
	
	while (i < n) {
		cin >> cur;//pide que le pases un valor que sea del formato long long, un int de toda la vida
		current.push_back(cur);//mete el valor que le pasaste el fondo del vector current
		partial_unord.push_back(partial_unord[i]+current[i]);//en part_unord le suma el valor de current en el valor del iterador
		++i;
	}

	sort(current.begin(), current.end());//a current le ordena el primer valor y el ultimo?
	vector<long long>partial_ord;//crea otra lista que esta semi-ordenada
	partial_ord.push_back(0);
	i = 0;
	
	while (i < n) {
		partial_ord.push_back(partial_ord[i] + current[i]);//hace lo mismo que en el while de antes
		++i;
	}

	int m;
	cin >> m;//pide otro valor por teclado?
	int t;
	long long l;
	long long r;
	long long res;
	
	while (m--) {//uhhhh empieza desde el fondo para atras, picante
		cin >> t;
		cin >> l;//pide mas valores???
		cin >> r;
		
		if (t == 1) {//no estoy seguro que es t, pero cambia completamente el resultado obtenido
			res = partial_unord[r] - partial_unord[l - 1];
		}else {//ni puta idea de que hace esto
			res = partial_ord[r] - partial_ord[l - 1];
		}
		cout << res << endl;//printea el resultado de este if?
	}
}