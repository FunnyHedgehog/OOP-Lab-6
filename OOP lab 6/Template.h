template <typename T1, typename T2, typename T3>
class PersonalData{
public:
	string ClassName(T3 ob){// повертає ім'я класу
		return typeid(ob).name();
	}
	PersonalData(){}
	T1 annual_profit;//щорічний
	T1 taxable_profit;// оподаткований
	T2 offical_account;
	T2 personal_account;
	string status;
	void setStatus(T3 ob){
		status = ClassName(ob);
	}

	T1 NonTaxableProfit(){
		T1 non_taxable_profit = annual_profit - taxable_profit;
		return non_taxable_profit;
	}
	void SaveMoneyOn(){
		money_on_the_crypto_wallets += NonTaxableProfit();
	}
	T1 PersonalMoney(){
			return annual_profit / 5;
	}
	void SeeOwnersMoney(){
		cout << "Money on: " << personal_account << PersonalMoney() << endl;
	}
	T1 getCryptoMoney(){
		return money_on_the_crypto_wallets;
	}
	void setCryptoMoney(T1 money_on_the_crypto_wallets){
		this->money_on_the_crypto_wallets = money_on_the_crypto_wallets;
	}
	T1 money_on_the_crypto_wallets;
};