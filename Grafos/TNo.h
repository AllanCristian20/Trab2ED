#ifndef TNO_H_INCLUDED
#define TNO_H_INCLUDED

using namespace std;

template <typename T> class TNo{
      T IdLinha;
      T Impedancia_positiva, Impedancia_negativa, Demanda, X_inicial,Y_inicial,X_final,Y_final;
      TNo<T> *prox;
   public:
      TNo();
      TNo(const TNo<T> &No);

      int getIdLinha();
      float getImpedancia_positiva();
      float getImpedancia_negativa();
      float getDemanda();

      float getX_inicial();
      float getY_inicial();

      float getX_final();
      float getY_final();

      void setprox(TNo<T> *_prox);
      TNo<T>* getprox();
      TNo<T>& operator=(const TNo<T> &No);
      ~TNo<T>();
};

template<typename T> TNo<T>::TNo(){
   prox = nullptr;
}

template<typename T> TNo<T>::TNo(const TNo<T> &No){
   prox = No.prox;
   IdLinha = No.IdLinha;
   Impedancia_positiva = No.Impedancia_positiva;
   Impedancia_negativa= No.Impedancia_negativa;
   Demanda = No.Demanda;
   X_inicial = No.X_inicial;
   X_final = No.X_final;
   Y_inicial = No.Y_inicial;
   Y_final = No.Y_final;
}

template<typename T> T TNo<T>::getIdLinha(){
   return IdLinha;
}

template<typename T> T TNo<T>::getImpedancia_positiva(){
   return Impedancia_positiva;
}

template<typename T> T TNo<T>::getImpedancia_negativa(){
   return Impedancia_negativa;
}

template<typename T> T TNo<T>::getDemanda(){
   return Demanda;
}

template<typename T> T TNo<T>::getX_inicial(){
   return X_inicial;
}

template<typename T> T TNo<T>::getX_final(){
   return X_final;
}

template<typename T> T TNo<T>::getY_inicial(){
   return Y_inicial;
}

template<typename T> T TNo<T>::getY_final(){
   return Y_final;
}


template<typename T> void TNo<T>::setprox(TNo<T> *_prox){
   prox = _prox;
}

template<typename T> TNo<T>* TNo<T>::getprox(){
   return prox;
}

template<typename T> TNo<T>& TNo<T>::operator=(const TNo<T> &No){
   if (this == &No) return *this;
   else{
      this->info = No.info;
      this->prox = No.prox;
      return(*this);
   }
}

template<typename T> TNo<T>::~TNo(){
   prox = nullptr;
}

#endif // TNO_H_INCLUDED
