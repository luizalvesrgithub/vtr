CREATE TABLE SIEX.siex.SeloDigital (
	ID int IDENTITY(1,1) NOT NULL,
	Ano int NULL,
	CartorioExtrajudicial int NULL,
	ConvenioProtesto int NULL,
	Cortesia bit NULL,
	DataHora datetime NULL,
	DataHoraTentativa datetime NULL,
	Digito varchar(50) COLLATE SQL_Latin1_General_CP1_CI_AI NULL,
	Isento bit NULL,
	LoteDeGeracao int NULL,
	LoteDeRecebimento int NULL,
	MotivoCancelamentoDeProtesto int NULL,
	MotivoDaIsencao varchar(1000) COLLATE SQL_Latin1_General_CP1_CI_AI NULL,
	MotivoDeCancelamento int NULL,
	NomeDoFuncionarioQueUtilizou varchar(1000) COLLATE SQL_Latin1_General_CP1_CI_AI NULL,
	Objeto varchar(MAX) COLLATE SQL_Latin1_General_CP1_CI_AI NULL,
	Observacao varchar(MAX) COLLATE SQL_Latin1_General_CP1_CI_AI NULL,
	Origem int NULL,
	ReferenteSelo int NULL,
	Sequencial bigint NULL,
	Status varchar(50) COLLATE SQL_Latin1_General_CP1_CI_AI NULL,
	StatusDoAndamentoDoSelo int NULL,
	TipoDeAto int NULL,
	TipoDeIntimacaoDeProtesto int NULL,
	Visivel bit DEFAULT 1 NULL,
	Postergado bit NULL,
	CONSTRAINT PK__SeloDigi__3214EC2701741E54 PRIMARY KEY (ID)
);
 CREATE NONCLUSTERED INDEX IDX_SeloDigital_01 ON siex.SeloDigital (  StatusDoAndamentoDoSelo ASC  , CartorioExtrajudicial ASC  )  
	 INCLUDE ( ID ) 
	 WITH (  PAD_INDEX = OFF ,FILLFACTOR = 100  ,SORT_IN_TEMPDB = OFF , IGNORE_DUP_KEY = OFF , STATISTICS_NORECOMPUTE = OFF , ONLINE = OFF , ALLOW_ROW_LOCKS = ON , ALLOW_PAGE_LOCKS = ON  )
	 ON [PRIMARY ] ;
 CREATE NONCLUSTERED INDEX IX_SeloDigital_ConsultaSelo ON siex.SeloDigital (  Ano ASC  , CartorioExtrajudicial ASC  , Sequencial ASC  , Digito ASC  )  
	 WITH (  PAD_INDEX = OFF ,FILLFACTOR = 90   ,SORT_IN_TEMPDB = OFF , IGNORE_DUP_KEY = OFF , STATISTICS_NORECOMPUTE = OFF , ONLINE = OFF , ALLOW_ROW_LOCKS = ON , ALLOW_PAGE_LOCKS = ON  )
	 ON [PRIMARY ] ;
 CREATE NONCLUSTERED INDEX IX_SeloDigital_DataHora ON siex.SeloDigital (  DataHora ASC  )  
	 WITH (  PAD_INDEX = OFF ,FILLFACTOR = 90   ,SORT_IN_TEMPDB = OFF , IGNORE_DUP_KEY = OFF , STATISTICS_NORECOMPUTE = OFF , ONLINE = OFF , ALLOW_ROW_LOCKS = ON , ALLOW_PAGE_LOCKS = ON  )
	 ON [PRIMARY ] ;
 CREATE NONCLUSTERED INDEX IX_SeloDigital_LoteDeGeracao ON siex.SeloDigital (  LoteDeGeracao ASC  )  
	 WITH (  PAD_INDEX = OFF ,FILLFACTOR = 90   ,SORT_IN_TEMPDB = OFF , IGNORE_DUP_KEY = OFF , STATISTICS_NORECOMPUTE = OFF , ONLINE = OFF , ALLOW_ROW_LOCKS = ON , ALLOW_PAGE_LOCKS = ON  )
	 ON [PRIMARY ] ;
 CREATE NONCLUSTERED INDEX IX_SeloDigital_LoteDeRecebimento ON siex.SeloDigital (  LoteDeRecebimento ASC  )  
	 WITH (  PAD_INDEX = OFF ,FILLFACTOR = 90   ,SORT_IN_TEMPDB = OFF , IGNORE_DUP_KEY = OFF , STATISTICS_NORECOMPUTE = OFF , ONLINE = OFF , ALLOW_ROW_LOCKS = ON , ALLOW_PAGE_LOCKS = ON  )
	 ON [PRIMARY ] ;
 CREATE NONCLUSTERED INDEX IX_SeloDigital_Status ON siex.SeloDigital (  Status ASC  )  
	 WITH (  PAD_INDEX = OFF ,FILLFACTOR = 90   ,SORT_IN_TEMPDB = OFF , IGNORE_DUP_KEY = OFF , STATISTICS_NORECOMPUTE = OFF , ONLINE = OFF , ALLOW_ROW_LOCKS = ON , ALLOW_PAGE_LOCKS = ON  )
	 ON [PRIMARY ] ;
 CREATE NONCLUSTERED INDEX IX_SeloDigital_StatusDoAndamento ON siex.SeloDigital (  StatusDoAndamentoDoSelo ASC  )  
	 WITH (  PAD_INDEX = OFF ,FILLFACTOR = 90   ,SORT_IN_TEMPDB = OFF , IGNORE_DUP_KEY = OFF , STATISTICS_NORECOMPUTE = OFF , ONLINE = OFF , ALLOW_ROW_LOCKS = ON , ALLOW_PAGE_LOCKS = ON  )
	 ON [PRIMARY ] ;


-- SIEX.siex.SeloDigital foreign keys

ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_CartorioExtrajudicial FOREIGN KEY (CartorioExtrajudicial) REFERENCES SIEX.siex.CartorioExtrajudicial(ID);
ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_ConvenioProtesto FOREIGN KEY (ConvenioProtesto) REFERENCES SIEX.siex.ConvenioProtesto(ID);
ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_LoteDeGeracao FOREIGN KEY (LoteDeGeracao) REFERENCES SIEX.siex.LoteDeGeracao(ID);
ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_LoteDeRecebimento FOREIGN KEY (LoteDeRecebimento) REFERENCES SIEX.siex.LoteDeRecebimento(ID);
ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_MotivoCancelamentoDeProtesto FOREIGN KEY (MotivoCancelamentoDeProtesto) REFERENCES SIEX.siex.MotivoCancelamentoDeProtesto(ID);
ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_MotivoDeCancelamento FOREIGN KEY (MotivoDeCancelamento) REFERENCES SIEX.siex.MotivoDeCancelamento(ID);
ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_Origem FOREIGN KEY (Origem) REFERENCES SIEX.siex.Origem(ID);
ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_StatusDoAndamentoDoSelo FOREIGN KEY (StatusDoAndamentoDoSelo) REFERENCES SIEX.siex.StatusDoAndamentoDoSelo(ID);
ALTER TABLE SIEX.siex.SeloDigital ADD CONSTRAINT FK_SeloDigital_TipoDeIntimacaoDeProtesto FOREIGN KEY (TipoDeIntimacaoDeProtesto) REFERENCES SIEX.siex.TipoDeIntimacaoDeProtesto(ID);
