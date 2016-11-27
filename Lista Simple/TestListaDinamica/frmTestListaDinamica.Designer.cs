namespace TestListaDinamica
{
    partial class frmTestListaDinamica
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnInstanciar = new System.Windows.Forms.Button();
            this.btnAgregar = new System.Windows.Forms.Button();
            this.txtAgregar = new System.Windows.Forms.TextBox();
            this.txtEliminarEnPosicion = new System.Windows.Forms.TextBox();
            this.btnEliminarEnPosicion = new System.Windows.Forms.Button();
            this.btnObtenerLongitud = new System.Windows.Forms.Button();
            this.txtObtenerEnPosicion = new System.Windows.Forms.TextBox();
            this.btnObtenerEnPosicion = new System.Windows.Forms.Button();
            this.btnVerLista = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnInstanciar
            // 
            this.btnInstanciar.Location = new System.Drawing.Point(46, 34);
            this.btnInstanciar.Name = "btnInstanciar";
            this.btnInstanciar.Size = new System.Drawing.Size(124, 23);
            this.btnInstanciar.TabIndex = 0;
            this.btnInstanciar.Text = "Instanciar";
            this.btnInstanciar.UseVisualStyleBackColor = true;
            this.btnInstanciar.Click += new System.EventHandler(this.btnInstanciar_Click);
            // 
            // btnAgregar
            // 
            this.btnAgregar.Location = new System.Drawing.Point(180, 73);
            this.btnAgregar.Name = "btnAgregar";
            this.btnAgregar.Size = new System.Drawing.Size(124, 23);
            this.btnAgregar.TabIndex = 1;
            this.btnAgregar.Text = "Agregar";
            this.btnAgregar.UseVisualStyleBackColor = true;
            this.btnAgregar.Click += new System.EventHandler(this.btnAgregar_Click);
            // 
            // txtAgregar
            // 
            this.txtAgregar.Location = new System.Drawing.Point(46, 75);
            this.txtAgregar.Name = "txtAgregar";
            this.txtAgregar.Size = new System.Drawing.Size(124, 20);
            this.txtAgregar.TabIndex = 2;
            // 
            // txtEliminarEnPosicion
            // 
            this.txtEliminarEnPosicion.Location = new System.Drawing.Point(46, 200);
            this.txtEliminarEnPosicion.Name = "txtEliminarEnPosicion";
            this.txtEliminarEnPosicion.Size = new System.Drawing.Size(124, 20);
            this.txtEliminarEnPosicion.TabIndex = 4;
            // 
            // btnEliminarEnPosicion
            // 
            this.btnEliminarEnPosicion.Location = new System.Drawing.Point(180, 198);
            this.btnEliminarEnPosicion.Name = "btnEliminarEnPosicion";
            this.btnEliminarEnPosicion.Size = new System.Drawing.Size(124, 23);
            this.btnEliminarEnPosicion.TabIndex = 3;
            this.btnEliminarEnPosicion.Text = "Eliminar En Posición";
            this.btnEliminarEnPosicion.UseVisualStyleBackColor = true;
            this.btnEliminarEnPosicion.Click += new System.EventHandler(this.btnEliminarEnPosicion_Click);
            // 
            // btnObtenerLongitud
            // 
            this.btnObtenerLongitud.Location = new System.Drawing.Point(46, 116);
            this.btnObtenerLongitud.Name = "btnObtenerLongitud";
            this.btnObtenerLongitud.Size = new System.Drawing.Size(124, 23);
            this.btnObtenerLongitud.TabIndex = 6;
            this.btnObtenerLongitud.Text = "Obtener Longitud";
            this.btnObtenerLongitud.UseVisualStyleBackColor = true;
            this.btnObtenerLongitud.Click += new System.EventHandler(this.btnObtenerLongitud_Click);
            // 
            // txtObtenerEnPosicion
            // 
            this.txtObtenerEnPosicion.Location = new System.Drawing.Point(46, 158);
            this.txtObtenerEnPosicion.Name = "txtObtenerEnPosicion";
            this.txtObtenerEnPosicion.Size = new System.Drawing.Size(124, 20);
            this.txtObtenerEnPosicion.TabIndex = 8;
            // 
            // btnObtenerEnPosicion
            // 
            this.btnObtenerEnPosicion.Location = new System.Drawing.Point(180, 156);
            this.btnObtenerEnPosicion.Name = "btnObtenerEnPosicion";
            this.btnObtenerEnPosicion.Size = new System.Drawing.Size(124, 23);
            this.btnObtenerEnPosicion.TabIndex = 7;
            this.btnObtenerEnPosicion.Text = "Obtener En Posicion";
            this.btnObtenerEnPosicion.UseVisualStyleBackColor = true;
            this.btnObtenerEnPosicion.Click += new System.EventHandler(this.btnObtenerEnPosicion_Click);
            // 
            // btnVerLista
            // 
            this.btnVerLista.Location = new System.Drawing.Point(46, 241);
            this.btnVerLista.Name = "btnVerLista";
            this.btnVerLista.Size = new System.Drawing.Size(124, 23);
            this.btnVerLista.TabIndex = 9;
            this.btnVerLista.Text = "Ver Lista";
            this.btnVerLista.UseVisualStyleBackColor = true;
            this.btnVerLista.Click += new System.EventHandler(this.btnVerLista_Click);
            // 
            // frmTestListaDinamica
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(351, 298);
            this.Controls.Add(this.btnVerLista);
            this.Controls.Add(this.txtObtenerEnPosicion);
            this.Controls.Add(this.btnObtenerEnPosicion);
            this.Controls.Add(this.btnObtenerLongitud);
            this.Controls.Add(this.txtEliminarEnPosicion);
            this.Controls.Add(this.btnEliminarEnPosicion);
            this.Controls.Add(this.txtAgregar);
            this.Controls.Add(this.btnAgregar);
            this.Controls.Add(this.btnInstanciar);
            this.MaximizeBox = false;
            this.Name = "frmTestListaDinamica";
            this.Text = "Test Lista Dinámica";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnInstanciar;
        private System.Windows.Forms.Button btnAgregar;
        private System.Windows.Forms.TextBox txtAgregar;
        private System.Windows.Forms.TextBox txtEliminarEnPosicion;
        private System.Windows.Forms.Button btnEliminarEnPosicion;
        private System.Windows.Forms.Button btnObtenerLongitud;
        private System.Windows.Forms.TextBox txtObtenerEnPosicion;
        private System.Windows.Forms.Button btnObtenerEnPosicion;
        private System.Windows.Forms.Button btnVerLista;
    }
}

