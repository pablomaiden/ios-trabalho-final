//
//  Contato+CoreDataProperties.h
//  Contatos
//
//  Created by Hugo Schneider on 22/09/16.
//  Copyright © 2016 Hugo Schneider. All rights reserved.
//

#import "Contato.h"


NS_ASSUME_NONNULL_BEGIN

@interface Contato (CoreDataProperties)

+ (NSFetchRequest<Contato *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *nome;
@property (nullable, nonatomic, copy) NSString *sobrenome;
@property (nullable, nonatomic, copy) NSString *endereco;
@property (nullable, nonatomic, copy) NSString *email;
@property (nullable, nonatomic, copy) NSString *telefone;
@property (nullable, nonatomic, retain) id image;


@property (nullable, nonatomic, copy) NSString *nome_posto_gasolina;
@property (nullable, nonatomic, copy) NSString *endereco_posto_gasolina;
@property (nullable, nonatomic, copy) NSString *email_posto_gasolina;
@property (nullable, nonatomic, copy) NSString *telefone_posto_gasolina;
@property (nullable, nonatomic, retain) id imagem_bandeira_posto_gasolina;



@end

NS_ASSUME_NONNULL_END
