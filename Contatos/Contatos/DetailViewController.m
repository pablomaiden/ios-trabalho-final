//
//  DetailViewController.m
//  Contatos
//
//  Created by Hugo Schneider on 8/25/16.
//  Copyright © 2016 Hugo Schneider. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem {
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
            
        // Update the view.
        [self configureView];
    }
}

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.detailItem) {
        self.nome.text = [[self.detailItem valueForKey:@"nome"] description];
        self.sobrenome.text = [[self.detailItem valueForKey:@"sobrenome"] description];
        self.email.text = [[self.detailItem valueForKey:@"email"] description];
        self.telefone.text = [[self.detailItem valueForKey:@"telefone"] description];
        self.endereco.text = [[self.detailItem valueForKey:@"endereco"] description];
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
