//
//  DetailViewController.h
//  Contatos
//
//  Created by Hugo Schneider on 8/25/16.
//  Copyright © 2016 Hugo Schneider. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *nome;
@property (weak, nonatomic) IBOutlet UILabel *sobrenome;
@property (weak, nonatomic) IBOutlet UILabel *email;
@property (weak, nonatomic) IBOutlet UILabel *telefone;
@property (weak, nonatomic) IBOutlet UILabel *endereco;

@property (weak, nonatomic) IBOutlet UILabel *nome_posto_gasolina;
@property (weak, nonatomic) IBOutlet UILabel *email_posto_gasolina;
@property (weak, nonatomic) IBOutlet UILabel *endereco_posto_gasolina;
@property (weak, nonatomic) IBOutlet UILabel *telefone_posto_gasolina;

@end

