import React from 'react';
import { StyleSheet, KeyboardAvoidingView, Image, TextInput, TouchableOpacity, Text, View } from 'react-native';

export default function App() {
  return (
    <KeyboardAvoidingView style={styles.background}>
    <View style={styles.containerlogo}>
      <Image
      source={require('./scr/routes/logo2.png')}
      />
 
    </View>
    <View style={styles.container}>
      <TextInput
      style={styles.input}
      placeholder='Email'
      autoCorrect={false}
      onChangeText={()=> {}}
       />

<TextInput
     style={styles.input}
      placeholder='Senha'
      autoCorrect={false}
      onChangeText={()=> {}}
       />

       <TouchableOpacity style={styles.btnSubmit}>
        <Text style={styles.Submit}>Acessar</Text>
       </TouchableOpacity>

       <TouchableOpacity style={styles.btnRegister}>
        <Text style={styles.register}>Criar conta</Text>
       </TouchableOpacity>
    </View>
    </KeyboardAvoidingView>
  );
}

const styles = StyleSheet.create({
  background:{
    flex:1,
    alignItems: 'center',
    justifyContent: 'center',
    backgroundColor: '#fff',
  },
  containerlogo:{
    flex:0,
    justifyContent: 'center,'
},
container:{
  flex:0,
  alignItems: 'center',
  justifyContent: 'center',
  width: '90%',
  paddingBottom: 50
},
input: {
  backgroundColor: '#fff',
  width: '90%',
  marginBottom: 15,
  color: '#222',
  fontSize: 17,
  borderRadius: 7,
  borderBlockColor: '#191919',
  padding: 10,
},
btnSubmit:{
  backgroundColor: '#193c35',
  width:'50%',
  height: 45,
  alignItems: 'center',
  justifyContent: 'center',
  borderRadius: 50
},
Submit:{
  color: '#fff',
  fontSize: 18,
},
btnRegister:{ 
  marginTop: 10,
},
register:
{
  color: '00000'
}
});
