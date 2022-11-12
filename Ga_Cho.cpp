#include<iostream>
int so_chan, so_con;
int Ga(int so_chan, int so_con) {
	int cho = -1,ga = -1,chan_ga;
	while (true) {
		cho++;
		chan_ga = so_chan - cho * 4;
		ga = chan_ga / 2;
		if (chan_ga % 2 == 0 && (ga + cho) == so_con) {
			break;
		}
		if (cho > so_con) {
			ga = -1;
			break;
		}
	}
	return ga;
}

int main() {
	std::cin >> so_chan >> so_con;
	if (Ga(so_chan, so_con) != -1)
		std::cout << Ga(so_chan, so_con) << " " << so_con - Ga(so_chan, so_con);
	else
		std::cout << " Khong co nghiem!!!";
}